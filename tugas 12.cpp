#include <iostream>

 using namespace::std;

 //struct algo{
 //int };

//algo ku;

main() {

    int  a [50],namanya,n,i,j,temp;
     int mumet;
     string edit;

cout<<"Masukan jumlah data = "; cin>>n;
cout<<endl;


for (i=0; i<n; ++i)
{cout<<" Data ke- "<<i<<"=";
cin>>a[i];}
for (i=1;i<n; ++i)
 {
     for (j=0; j<(n-i); ++j)
        if (a[j]>a[j+1])

     {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
     }
 }

 for (i=0; i<n; ++i)
    cout<<" "<<a[i];


//cout<<"masukan jumlah data= ";
// cin>>n;
// for (i=0;i<n;++i)


//cout<<"\nnama ke-"<<i<<"="; //cin>>nama[i];


     cout<<"\nMasukan nama =";
     cin>>namanya;
     mumet=0;


for (i=0;i<n;++i)

    {
     if (a[i]==namanya)
     {
         mumet=1;

cout<<"data ke- "<<i<<" ";
     }}
    if (mumet==0)
        {
            cout<<"data tidak di temukan ";
        }

        cout<<" \napakah anda ingin mengedit data yang tadi";
        cin>>edit;

       // if (edit=="iya")



 }
