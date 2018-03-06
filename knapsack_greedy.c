#include<stdio.h>
void knapsack(int n,float weight[],float profit [],float capacity)
{
	float x[20],tp=0;

	int i,u;
	u=capacity;
	for(i=0;i<n;i++)
		x[i]=0.0;
		for(i=0;i<n;i++)
		{
			if(weight[i]>u)
			    break;
			 else{
				 x[i]=1.0;
				 tp=tp+profit[i];
				 u=u-weight[i];
			 }
		 }
		 if(i<n)
		   x[i]=u/weight[i];
		   
		 
		 tp=tp+(x[i]*profit[i]);
		 printf("\n The Result vector:");
		 for(i=0;i<n;i++)
		 {
			 printf("%f\t",x[i]);
			}
		 printf("Maximum profit is %f",tp);
		  
  }
  
  
  int main()
  {
	  float weight[20],profit[20],capacity;
	  int no,i,j;
	  float ratio[20],temp;
	  printf("Enter the no of objects");
	  scanf("%d",&no);
	  printf("Enter the weight of each object:-");
	  for(i=0;i<no;i++)
	  {
		  scanf("%f",&weight[i]);
	  }
	  printf("Enter the profit of each object:-");
	  for(i=0;i<no;i++);
	  {
		  scanf("%f",&profit[i]);
	  }
	  printf("Enter the capacity of knapsack:-");
	  scanf("%f",&capacity);
	  for(i=0;i<no;i++)
	  {
		  ratio[i]=profit[i]/weight[i];
	  }
	  for(i=0;i<no;i++)
	  {
		  for(j=i+1;i<no;j++)
		  {
			  if(ratio[i]<ratio[j])
			  {
				  
			  temp=weight[i];
			  weight[i]=weight[j];
			  weight[j]=temp;
			  
			  temp=profit[i];
			  profit[i]=profit[j];
			  profit[j]=temp;
		  }
	  }
  }
  	knapsack(no,weight,profit,capacity);
  	return 0;

}
	
