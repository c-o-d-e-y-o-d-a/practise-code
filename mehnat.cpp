#include<iostream>




using namespace std;





 int main (){
 
/* int score ,sum=0;
int counter=0;
while(counter<4){
    cout<<"enter the next score:" <<endl;
    cin>>score;
    sum = sum+ score;
    counter++;
    
}


cout<<sum<<endl;*/














int sum1=0, sum2=0,sum3=0;
int n;
cout<<"enter the value of n :"<<endl;
cin>>n;
int counter = 1;
while(counter<=n){
    sum1+=counter;
    sum2+=counter*counter;
    sum3+=counter*counter*counter;
    counter++;

}
cout<<"value of n:"<<n<<endl;
cout<<"value of sum1:"<<sum1<<endl;
cout<<"value of sum2:"<<sum2<<endl;
cout<<"value of sum3"<<sum3<<endl;










return 0;}