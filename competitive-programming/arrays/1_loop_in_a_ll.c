#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
}*ptr1, *ptr2, *temp, *head = NULL, *tail;

int main() {
	int ans, size = 0, i, random_index;;

	while(1) {
		printf("Enter the data");
		temp = (struct node *)malloc(sizeof(struct node));
		scanf("%d", &(temp->data));
		temp->next = NULL;
		size += 1;
		if(head == NULL)
			head = temp;
		else
			tail->next = temp;
		tail = temp;
		printf("Do you want to continue");
		scanf("%d", &ans);
		if(ans == 0) break;
	}
	//Creating a random loop
	random_index = 1;//rand()%size-1;
	printf("\nRandom index: %d\n", random_index);
	printf("Testing");
	i = 1;
	temp = head;
	printf("%d", temp->data);
	while(i < random_index) {
		temp = temp->next;
		i += 1;
	}
	tail->next = temp;
	temp = head;
	i = 0;
	while(i<size) {
		printf("%d->", temp->data);
		temp = temp->next;
		i++;
	}

	//For finding the cycle
	ptr1 = head;
	ptr2 = head->next;
	while(ptr1 != ptr2){
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
	}
	printf("Merged at%d", ptr1->data);

}
