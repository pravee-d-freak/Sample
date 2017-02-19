#include<stdio.h>
int main(){
		long int sum=0;
		int cases,max=0;
		scanf("%d",&cases);
		int array[2*cases];
		int i=0,j=0;
		for(i=0;i<2*cases;i++){
			scanf("%d",&array[i]);
			if(max<array[i])
				max=array[i];
		}	
		int fab[max+1];
		fab[0]=0;
		fab[1]=1;
		for(j=2;j<max+1;j++)
			fab[j]=fab[j-1]+fab[j-2];
		i=0;
		while(cases>0){
			sum=0;
			for(j=array[i];j<=array[i+1];j++)
				sum=sum+fab[j];
			i=i+2;
			cases--;
			printf("%ld\n",sum%1000000007);
		}
		return 0;
}
