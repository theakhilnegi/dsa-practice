#include <iostream>
using namespace std;

// TC-> O(n) but not work for all case 
float func(float a1[],float a2[], int n1, int n2){
    int i=0,temp,j=0;
    float res=0,res2;
    if((n1+n2)%2!=0){
        temp=(n1+n2)/2;
        while(temp>=0){
            if(a1[i]<a2[j]){
                res=a1[i];
                i++;
            }else{
                res=a2[j];
                j++;
            }
            temp--;
        }
    return res;
    }else{
        temp=(n1+n2)/2;
        while(temp>=0){
            if(a1[i]<a2[j]){
                res=a1[i];
                i++;
            }else{
                res=a2[j];
                j++;
            }
            if(temp==1){
                res2=res;
            }
            temp--;
        }
        return ((res+res2)/2);
    }
}

//Optimised method      n1 is always smaller than n2        TC->O(logn)
double funcO(int a1[], int a2[], int n1, int n2){
    int begin=0,end=n1;
    while(begin<=end){
        int i1=(begin+end)/2;
        int i2=((n1+n2+1)/2)-i1;
        int min1 = (i1==n1)?INT16_MAX:a1[i1];
        int max1 = (i1==0)?INT16_MIN:a1[i1-1];
        int min2 = (i2==n2)?INT16_MAX:a2[i2];
        int max2 = (i2==0)?INT16_MIN:a2[i2-1];
        cout<<min1<<" "<<max1<<" "<<min2<<" "<<max2<<endl;
        if(max1<=min2 && max2<=min1){
            if((n1+n2)%2==0){
                return ((double)max(max1,max2)+min(min1,min2))/2;
            }else{
                return (double)max(max1,max2);
            }
        }else if(max1>min2){
            end=i1-1;
        }else{ 
            begin=i1+1;
        }
    }
}

int main(){
    cout<<"Enter N1: ";
    int n1;
    cin>>n1;
    int a1[n1];
    cout<<"Enter "<<n1<<" number: ";
    for (int i = 0; i < n1; i++)
    {
        cin>>a1[i];
    }
    cout<<"Array A1 is: ";
    for (int i = 0; i < n1; i++)
    {
        cout<<a1[i]<<"  ";
    }
    cout<<"\nEnter N2: ";
    int n2;
    cin>>n2;
    int a2[n2];
    cout<<"Enter "<<n2<<" number: ";
    for (int i = 0; i < n2; i++)
    {
        cin>>a2[i];
    }
    cout<<"Array A2 is: ";
    for (int i = 0; i < n2; i++)
    {
        cout<<a2[i]<<"  ";
    }
    cout<<endl;
    cout<<funcO(a1,a2,n1,n2);
    return 0;
}