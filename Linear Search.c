#include <stdio.h>
int search(int arr[], int find)
{
    int i;
    scanf("%d", &find);
    for(i=0;i<10;i++)
    {
        if(arr[i]==find) return 1;
        else
        return 0;
    }
}
int main()
{
	int arr[10],i,result;
	int find;
	for (i=0;i<10;i++)
	{
		arr[i]=i*i+2;
	}
	result=search(arr,find);
	printf("%d", result);


}
