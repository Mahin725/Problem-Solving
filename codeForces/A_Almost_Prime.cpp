#include<stdio.h>
#include<math.h>
int main(){
	int Prime[3000];
	Prime[0]=2,Prime[1]=3;
	int ptr=2;
	for(int i=5;i<=3500;i+=2){
		int j;
		for(j=0;j<ptr;j++)
			if( i%Prime[j]==0 )
				break;
		if( j>=ptr )
			Prime[ptr++]=i;
	}

	int n;
	while( scanf("%d",&n)==1 ){
		int ans=0;
		for(int i=6;i<=n;i++){
			int count=0;
			for(int j=0;Prime[j]<=i;j++)
				if( i%Prime[j]==0 )
					count++;
			if( count==2 )
				ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
