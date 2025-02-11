#include<iostream>
using namespace std; int i=1, j=17, ivan=1, jhed=1;
int main(){
    for(int b=i;b<=19; b++) cout<<"  ";
    for(int c=15;c>=1; c--) {cout<<"* ";} cout<<endl;
    
    for(int a=1; a<=2; a++){ 
    for(int b=i;b<=18; b++) cout<<"  ";
    for(int c=j;c>=1; c--) cout<<"* ";
    i++; j+=1; cout<<endl;}


    for(int a=1; a<10; a++){
       int b=1; while(b<=16){cout<<"  ";b++;}
       
if ((a==1)||(a==2))  {for(int c=1; c<=5; c++){cout<<"* ";} cout<<"    ";for(int c=1; c<=12; c++){cout<<"* ";}}
else if(a==5) { for(int P=1; P<=18; P++){cout<<"* ";}}  else if ((a==6)||(a==9)) { for(int c=1; c<=9; c++){cout<<"* ";}}
else if (a==7){ for(int P=1; P<=17; P++){cout<<"* ";}}  else if (a==8){ for(int P=1; P<=16; P++){cout<<"* ";}}
else { for(int c=1; c<=19; c++){cout<<"* ";}}                                                             cout<<endl;}

for(int z=1;z<=2;z++){for(int a=16-z; a>=1; a--){cout<<"  ";} for(int a=9+z; a>=1; a--){cout<<"* ";} cout<<endl;}  cout<<"  *   "; for(int a=1; a<=10; a++)cout<<"  ";
for(int a=1; a<=11; a++)cout<<"* "; cout<<endl;



for(int a=1;a<=4;a++){
    for(int b=a+2;b>=1; b--)\
       { cout<<"* ";}
    for(int c=11-a*2; c>=1; c--)
       { cout<<"  ";}
    if((a==1)||(a==2)){ for(int b=11+a; b>=1; b--)cout<<"* ";}
    else { for(int b=14+a; b>=1; b--)cout<<"* ";}
                                                    cout<<endl;}

    

    for(int a=1;a<=2; a++){
      for(int c=1;c<=24;c++){  cout<<"* ";}
      cout<<"  * * "<<endl;}
      cout<<"  ";
      for(int a=1; a<=23; a++) {cout<<"* ";} cout<<endl;



      for(int a=1; a<=6; a++){
         for(int b=a;b>=1;b--){cout<<"  ";}
         for(int c=23-2*a; c>=1; c--) {cout<<"* ";}
         cout<<endl;}  


      for(int a=1; a<=7; a++){
         for(int b=1;b<=7;b++){cout<<"  ";}
         

       if ((a==1)||(a==2)||(a==3)){for(int c=1;c<=11;c++){cout<<"* ";}}
       
       else if ((a==4)||(a==7)) 
       { for(int i=1;i<=2;i++){for(int j=1;j<=4;j++){cout<<"* ";}
         for(int k=1;k<=3;k++){cout<<"  ";}} }
       
       
       
       
       
       
       else  for(int i=1;i<=2;i++){for(int j=1;j<=3;j++){cout<<"* ";}    for(int k=4;k>=1;k--){cout<<"  ";}}    
                  cout<<endl; }

   


   





return 0;
}