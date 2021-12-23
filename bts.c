#include<stdio.h>
void main()
{
	int rc,gkc,ac,enc,cc,rs,gks,as,ens,cs,res;
	printf("entercutoff:");
	scanf("%d%d%d%d%d",&rc,&gkc,&ac,&enc,&cc);
	printf("enterscores:");
	scanf("%d%d%d%d%d",&rs,&gks,&as,&ens,&cs);
	res=!(rc>rs || gkc>gks || ac>as || enc>ens || cc>cs);
	printf("result=%d",res);
	printf("\nin result \npass=1 \nfail=o");
}
