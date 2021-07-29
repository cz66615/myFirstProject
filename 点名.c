#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct Node{
	char mz[100];
	struct Node *next;
}Student[50]; 
int main()
{
	int i=0;
	FILE *fp=NULL;
	fp=fopen("名单.txt","r");
	if(fp==NULL)
	{
		printf("文件打开失败!\n");
	}
	while(!feof(fp))
	{
	
		fscanf(fp,"%s",Student[i].mz);
		i++;
	}
	fclose(fp);
	int rs,sum=0,j;
	int dw[50];
	for(i=0;i<50;i++)
	{
		dw[i]=0;
	} 
	srand((unsigned)time(NULL));
	printf("请输入您要点名的人数:");
	scanf("%d",&rs);
	while(rs!=sum)
	{		
		j=rand()%50;
		if(dw[j]!=1)
		{
			printf("%d",j+1);
			printf("%s\n",Student[j]);
			dw[j]=1;
			sum++;
		}
	}
}
