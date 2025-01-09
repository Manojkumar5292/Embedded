#include<stdio.h>

int main(){
	int arr[10]={1,1,2,3,4,2,7,2,9,10};
	int i=0,j=0,cnt;
	for(;j<10;j++){
		cnt=0;
		for(;i<10;i++){
			if(arr[j]==arr[i]){
				cnt++;
			}
		}
		printf("arr[%d] = %d times encountered\n",j,cnt);
		if(cnt>0)
			arr[j]=-1;

	}
	return 0;
}
