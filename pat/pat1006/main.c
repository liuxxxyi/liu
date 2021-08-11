int main()
{
	int n,ge=0,shi=0,bai=0;
	scanf("%d",&n);
    ge = n%10;
    shi = (n%100)/10;
    bai = n/100;
    for(int i=0;i<bai;i++)
			printf("B");


    for(int i=0;i<shi;i++)
			printf("S");



    for(int i=0;i<ge;i++)
			printf("%d",i+1);

	return 0;
}
