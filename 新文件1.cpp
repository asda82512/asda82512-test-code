#include <iostream>
using namespace std;

int main()
{
    int n = 5,i,t,j,k,l;
    int a[n] = {0};
    for(i = 0 ; i < n ; i++)
    {
        cout<<"��"<<i+1<<"���ƭ�";
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        for(k=0;k<n;k++)
            cout<<a[k]<<"\t";
        cout<<endl;
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        } 
    }
    cout<<"�ƧǦn���}�C��"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<"\t ";

	return 0;
}

