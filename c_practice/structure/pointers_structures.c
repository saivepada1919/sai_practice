#include <stdio.h>
struct cricket{
	int bats,balls,wickets;
};
int main(){
	struct cricket c;
	struct cricket *ptr=&c;
	printf("enter the no.of bats,balls and wickets: ");
	scanf("%d%d%d",&ptr->bats,&ptr->balls,&ptr->wickets);
	printf("bats: %d\nballs: %d\nwickets: %d\n",ptr->bats,ptr->balls,ptr->wickets);
	return 0;
}

