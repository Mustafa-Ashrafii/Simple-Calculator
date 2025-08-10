#include<stdio.h>
#include<math.h>

double add(double a,double b){
	return a+b;
}
double sub(double a,double b){
	return a-b;
}
double mul(double a,double b){
	return a*b;
}
double division(double a,double b){
	return a/b;
}
double power(double a,double b){
	return pow(a,b);
}
int main(){
	double a,b,result;
	int select;
	printf("--------------------SCIENTIFIC CALCULATOR-------------------\n\n");
	printf("Enter value 1: ");
	scanf("%lf",&a);
	printf("Enter value 2: ");
	scanf("%lf",&b);
	printf("\n");
	printf("\nFollowing are the functions you can perform:\n");
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n");
	printf("Select: ");
	scanf("%d",&select);
	printf("\n");
	switch(select){
		case 1:
			result=add(a,b);
			printf("%.2lf + %.2lf = %.2lf",a,b,result);
			break;
		case 2:
			result=sub(a,b);
			printf("%.2lf - %.2lf = %.2lf",a,b,result);
			break;
		case 3:
			result=mul(a,b);
			printf("%.2lf * %.2lf = %.2lf",a,b,result);
			break;
		case 4:
			result=division(a,b);
			printf("%.2lf / %.2lf = %.2lf",a,b,result);
			break;
		case 5:
			result=power(a,b);
			printf("%.2lf to the power %.2lf = %.2lf",a,b,result);
			break;
		default:
			printf("Please enter correct command!\n");
	}
	return 0;
	
}
