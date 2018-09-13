#include<stdio.h>
#define Arr_num(Arr) (sizeof(Arr)/sizeof(Arr[0]))
static char arr_num;
static sto_arr[20];
void finding(char f_val,char *arr_a,char len_add);
char *sorting(char len_add,char arr_a[]);
void main()
{
	char i_try=0;
	char arr[]={2,5,6,3,9,2,7,6,5,1,1,2,6,3,9,7};
	char *arr_try=NULL;
	char len_address=0;
	len_address=Arr_num(arr);

	arr_try=sorting(len_address,arr);
	for(i_try=0;i_try<len_address;i_try++)
	printf("%d ",*(arr_try+i_try));
	printf("\n");

	finding(6,arr_try,len_address);
	for(i_try=0;i_try<arr_num;i_try++)
		printf("%d ",sto_arr[i_try]);
}

char *sorting(char len_add,char arr_a[])//使用结构体返回多个参数
{
	unsigned int pre_add=0,nex_add=0;
	char cen_val=0;
	char ele_point=0,ex_number=0;
//	pre_add=&arr_a;
//	nex_add=&arr_a+1;
//	len_add=nex_add-pre_add;//sizeof替代
	for(ele_point=0;ele_point<len_add-1;ele_point++)//0-(n-1),exclude lastone
		for(ex_number=0;ex_number<len_add-1-ele_point;ex_number++)
		{
			if(arr_a[ex_number]>arr_a[ex_number+1])
			{
			cen_val=arr_a[ex_number];
			arr_a[ex_number]=arr_a[ex_number+1];
			arr_a[ex_number+1]=cen_val;
			}
		}
		return arr_a;
}
void finding(char f_val,char *arr_a,char len_add)
{
	
	char l_arr=0,h_arr=len_add-1,cen_arr=0;
	char f_more=0;	
	while(l_arr<h_arr)
	{
		cen_arr=(l_arr+h_arr)/2;
		if(arr_a[cen_arr]>f_val)
			h_arr=cen_arr-1;
		else if(arr_a[cen_arr]<f_val)
			l_arr=cen_arr+1;
		else if(arr_a[cen_arr]==f_val)
		{
			for(f_more=l_arr;f_more<=h_arr;f_more++)
			{
				if(arr_a[f_more]==f_val)
				{
					sto_arr[arr_num]=f_more;
					arr_num++;
				}	
			}
			break;
		}
	}
}