#include<iostream>

using namespace std;

int partitioning(int n, int cd, int l, int totalPartitions){

	if(n==1 & l==0)
		return 1;
	
	else if(n>cd){
		int temp = (int)(n/2) - l;
		if(temp > 0){
			for(int i=n-cd, j=cd; i>=j; i--, j++, l++){
				totalPartitions = partitioning(i, j, l, totalPartitions);
			}
			totalPartitions += temp;
		}
	}
return totalPartitions;
}

int main(){

	cout<<"Enter the integer: ";
	int n=0, totalPartitions=0;
	cin>>n;
	
	totalPartitions = partitioning(n, 1, 0, totalPartitions);
	cout<<"total partitions are: "<<totalPartitions<<endl;

	/*int count =0;
	//for(int num=1; num<=26; num++){
	for(int i=0; i<13; i++)	//1
	for(int j=i; j<13; j++)	//2
	for(int k=j; k<13; k++)	//3
	for(int l=k; l<13; l++)	//4
	for(int m=l; m<13; m++)	//5
	for(int n=m; n<13; n++)	//6
	for(int o=n; o<13; o++)	//7
	for(int p=o; p<13; p++)	//8
	for(int q=p; q<13; q++)	//9
	for(int r=q; r<13; r++)	//10
	for(int s=r; s<13; s++)	//11
	for(int t=s; t<13; t++)	//12
	for(int u=t; u<13; u++)	//13
	for(int v=u; v<13; v++)	//14
	for(int w=v; w<13; w++)	//15
	if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w < 13){
	for(int x=w; x<13; x++)	//16
	if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x < 13){
	for(int y=x; y<13; y++)	//17
	if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y < 13){
	for(int z=y; z<13; z++)	//18
	if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z < 13){
	for(int a=z; a<13; a++)	//19
	if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+a < 13){
	for(int b=a; b<13; b++)	//20
	if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+a+b < 13){
	for(int c=b; c<13; c++)	//13
	if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+a+b+c < 13){
	for(int d=c; d<13; d++) //22
	if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+a+b+c+d < 13){
	for(int e=d; e<13; e++)	//23
	if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+a+b+c+d+e == 13)
	//	cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<l<<"\t"<<m<<"\t"<<n<<"\t"<<o<<"\t"<<p<<"\t"<<q<<"\t"<<r<<"\t"<<s<<"\t"<<t<<"\t"<<u<<"\t"<<v<<"\t"<<w<<"\t"<<x<<"\t"<<y<<endl;
		count++;
	else if(i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+a+b+c+d+e > 13)
		break;
	//}
	} else break;
	} else break;
	} else break;
	} else break;
	} else break;
	} else break;
	} else break;
	} else break;


	cout<<"total Partitions for "<<13<<" are: "<<count<<endl;*/
	//for(int f=e; f<13; f++)	//24
	//for(int g=f; g<13; g++)	//25
	//for(int h=g; h<13; h++)	//26

return 0;
}
