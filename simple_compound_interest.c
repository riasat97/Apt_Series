#include<stdio.h>
//1.How much interest will tk. 5000(principle) earn at an annual rate of 10%(interest rate) in three year if the interest is compounded annually?
//2.How much will be the simple Interest ?
//3.how much will be the difference between Simple interest and Compound interest ?
//4.How much interest will tk. 5000 earn at same annual rate in 1.5 year if the interest is compounded every 6 months?
float simpleInterest(int p,float n,float r){
        return p*n*(r/100);// simple interest I= P*n*r ;
        /* here 10% of 5000 for 1 year is 500 tk
        so for 3 year 500*3=1500 tk
        */
}
float compoundInterest(int p,float n,float r){
   r=(100+r)/100; // 110/100 ;rate of interest to calculate amount
   float amount=p*r;//amount(সুদাসল)   for 1st year is 5000*110/100 = 5500 tk
   float year=2.0;// have to calculate total amount for 2nd and 3rd year
   while(year<=n){
      amount*=r;
      year++;
      /*amount(সুদাসল )  for 2nd year is 5500*110/100 = 6050 tk
        amount(সুদাসল )  for 3rd year is 6050*110/100 = 6655 tk
      */
   }
   return amount-p;
   /* amount - principle = interest (সুদাসল - আসল  = সুদ )
   here 6655 -  5000 = 1655 tk
   */
}
float halfYearlyCompoundInterest(int p,float n,float r){
   r=(100+r/2)/100; // rate of interest 105/100 as interest compounded half yearly
   float amount=p*r;//amount(সুদাসল)   for first six month i.e 0.5 year is 5000*105/100 = 5250 tk
   float year=1.0; //have to calculate total amount for next 12 months i.e is next 0.5 and 0.5 year
   while(year<=n){
      amount*=r;
      year+=0.5;
      /*amount(সুদাসল )  for 0.5 year is 5250*105/100 = 5512.5 tk
        amount(সুদাসল )  for 0.5 year is 6050*110/100 = 5788.12 tk
      */
   }
   return amount-p;
    /* amount - principle = interest (সুদাসল - আসল  = সুদ )
   here 5788.12 -  5000 = 788.12 tk
   */
}
int main(){
    int principle=5000;
    float interesetRate =4;//rate of interest 10%
    float year=3;

    float simple_interest=simpleInterest(principle,year,interesetRate);
    float compound_interest=compoundInterest(principle,year,interesetRate);
    float difference = compound_interest- simple_interest;

    year=1.5;
    float half_yearly_compound_interest=halfYearlyCompoundInterest(principle,year,interesetRate);

    printf("Simple interest :%.2f tk\n",simple_interest);
    printf("Compound interest :%.2f tk\n",compound_interest);
    printf("Difference CI and SI:%.2f tk\n",difference);
    printf("Half yearly Compound interest :%.2f tk\n\n",half_yearly_compound_interest);

}
