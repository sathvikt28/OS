#include<iostream>
using namespace std;
int main()
{
int p[20],bt[20],wt[20],tat[20],i,k,n,temp;
float wtavg,tatavg;
cout<<"Enter the number of process ";
cin>>n;
for(i=0;i<n;i++)
{
p[i]=i;
cout<<"Enter the burst time \n";
cin>>bt[i];
}
for(i=0;i<n;i++)
{
	for(k=i+1;k<n;k++)
	{
	if(bt[i]>bt[k])
	{
	temp=bt[i];
	bt[i]=bt[k];
	bt[k]=temp;
	temp=p[i];
	p[i]=p[k];
	p[k]=temp;
	}
	}
}
	wt[0]=wtavg=0;
	tat[0]=tatavg=bt[0];
for(i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
wtavg=wtavg+wt[i];
tatavg=tatavg+tat[i];
}
cout<<"Process\tbursttime \twaiting time\tturn around time\n";
for(i=0;i<n;i++)
cout<<"\np["<<p[i]<<"]\tbt["<<bt[i]<<"]\twt["<<wt[i]<<"]\ttat["<<tat[i]<<endl;
cout<<"\nAverage wating time"<<wtavg/n;
cout<<"\nAverage turn around time \n"<<tatavg/n;
}
