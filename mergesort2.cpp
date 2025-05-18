#include<iostream>
using namespace std;

    void mergee(int arr[],int left,int mid,int right){

        int n1= mid-left+1;
        int n2= right-mid;
        int L[n1],R[n2];

        for(int i=0;i<n1;i++){
            L[i]=arr[left+i];

        }

        for(int j=0;j<n2;j++){
            R[j]=arr[mid+1+j];
        }
        int i=0,j=0,k=left;

        while(i<n1 && j<n2){



            if(L[i]<R[j]){
                arr[k]=L[i];
                i++;
            }
            else{
                arr[k]=R[j];
                j++;
            }
            k++;




        }

        while(i<n1){

                 arr[k]=L[i];
                i++;
        k++;


        }

        while(j<n2){

            arr[k]=R[j];
            j++;
            k++;
        }



    }


 void mergesort(int arr[],int left,int right){


        if(left<right){

            int mid = left +(right-left)/2;

            mergesort(arr,left,mid);
            mergesort(arr,mid+1,right);


            mergee(arr,left,mid,right);
        }




 }


 void display(int arr[],int m,int n){

        for(int i=m;i<n;i++){

            cout<<arr[i]<<" ";
        }


 }


int main(){
int n;
cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"after sort: "<<endl;
 mergesort(arr,0,n-1);

 display(arr,0,n);


 cout<<endl;
 int m=n/2;


 display(arr,0,m);

 cout<<endl;

 display(arr,m,n);

}
