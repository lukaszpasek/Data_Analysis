#include<iostream>
#include<map>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  string kluczoweS[]={"Ligia","Winicjusz","Ursus","Eunice","Kryspus","Chilonides","Petroniusz","Neron","Plaucjusz","Pomponia","Grecyna","Aulusow","Akte", "Chilo", "Chrystusa", "Ligie", "Ligii","Petroniusza", "Rzym", "Rzymie", "Winicjusza","cezar", "cezara",};
string kluczoweM[]={"Soplica","Zosia","Telimena","Hrabia","Wojski","Rejent","Asesor","Stolnik","Gerwazy","Jankiel","Podkomorzy","Dobrzynski","Robak","Litwo", "Sedzia"};
string kluczoweP[]={"Wokulski","Rzecki","Lecka","Ochocki","Lecki","Krzeszowska","Mraczewski","Geist","Wegielek","Marianna","Minclowie","Ignacy", "Izabela", "Izabeli", "Ochocki", "Pani", "Panna", "Stach", "Starski", "Stawska", "Stawskiej", "Szlangbaum", "Szuman", "Tomasz", "Wasowska"};
double Sienkiewicz[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,171993,1360,807,0,0,0,0,1,21,21,0,0,19742,3695,10413,0,0,0,0,0,0,0,0,0,0,0,1152,218,0,0,0,954,0,1594,584,1431,440,203,89,622,130,581,690,559,1498,657,1493,793,2491,3,500,730,1252,343,45,2291,0,0,721,0,0,0,0,0,0,79685,13834,41837,26586,79099,910,13261,9998,82371,19253,23036,41850,27320,42534,67464,21374,7,34926,43934,27578,20919,79,34865,26,34115,64641,0,0,0,0,0};
double Mickiewicz[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,62618,958,974,0,0,0,0,0,63,63,130,0,8330,575,2623,1,0,0,0,0,0,0,0,0,0,0,1069,1335,0,0,0,397,0,641,507,502,495,16,41,327,268,733,649,608,296,532,721,531,1149,0,452,989,850,160,2,1124,0,0,893,0,0,0,0,0,0,32340,5221,14539,10387,27832,355,4253,3525,26606,5959,11276,15322,9241,14659,23663,7271,1,13920,16042,9709,6964,5,13273,3,12539,23988,0,0,0,0,0,};
double Prus[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,257471,2589,2060,0,0,0,0,23,284,284,0,0,23089,12431,39584,0,48,49,9,15,10,22,17,15,45,19,1535,1023,0,0,0,3216,0,2089,1183,1526,907,151,292,611,310,1820,1316,1072,689,1833,2311,1409,2937,7,813,2436,1567,234,16,4896,4,16,1670,0,0,0,0,0,0,131849,21624,53879,40001,119367,2009,17272,12690,110728,27617,42987,60942,40027,65654,98537,36411,2,48101,62777,42271,29309,49,46636,9,46709,87120,0,0,0,0,0};
double counterS=1081619;
double counterM=400515;
double counterP=1620530;
  int t;
  cin>>t;
  string tekst1;
 sort(kluczoweM,kluczoweM+15);sort(kluczoweS,kluczoweS+23);sort(kluczoweP,kluczoweP+25);
 /* for(int i=0 ; i<14 ; i++)
  {
    cout<<kluczoweM[i]<<endl;
 */
  
  for(int q=0 ; q<=t ; q++)
  {
  string tekst;
  string slowo="";
  if(q==0)getline(cin, tekst1);
  else getline(cin, tekst);
  double counter=0;
    double wsp1=1,wsp2=1,wsp3=1;
  for(long long i=0 ; i<tekst.length() ; i++)
  {
     if(wsp1>1000000000 && wsp2>1000000000 && wsp3>1000000000)
     {
       wsp1/=1000000000;
       wsp2/=1000000000;
       wsp3/=1000000000;
     }
     wsp1*=Sienkiewicz[tekst[i]]/counterS*1000000;
     wsp2*=Mickiewicz[tekst[i]]/counterM*1000000;
     wsp3*=Prus[tekst[i]]/counterP*1000000;
     if((tekst[i]>=65 && tekst[i]<=90) || (tekst[i]>=97 && tekst[i]<=122))slowo+=tekst[i];
      if (tekst[i+1]==32)
     {
      // cout<<"SLOWO "<<slowo<<endl;
       if(*(lower_bound(kluczoweM,kluczoweM+15,slowo))==slowo)  wsp2*=90;
      if(*(lower_bound(kluczoweS,kluczoweS+23,slowo))==slowo) wsp1*=90;
       if(*(lower_bound(kluczoweP,kluczoweP+25,slowo))==slowo)  wsp3*=90;
     }
     else if(tekst[i]==32) slowo="";
    
  }

 if(q>0)
 {
   if(wsp1>wsp2 && wsp1>wsp3) cout<<"Sienkiewicz"<<endl;
   else if(wsp2>wsp1 && wsp2>wsp3) cout<<"Mickiewicz"<<endl;
   else cout<<"Prus"<<endl;
 }
   
  }
    return 0;
}