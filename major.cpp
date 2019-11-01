#include "major.h"
#include<iostream>
using namespace std;

major::major()
{
	head = NULL;
	tail = NULL;
}
void major::create_afc(double data) {
	afc* temp = new afc;
	temp->value = data;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		tail = head;
		temp=NULL;
}
	else {
		tail->next = temp;
		tail = temp;
	}
}
void major::display() {
	afc* ptr;	
	ptr = head;
	while (ptr != NULL) {
		cout << "           ";
		cout << ptr->value;
		ptr = ptr->next;
		
	}
}
void major::add_first(double data) {
	afc* ptr = new afc;
	ptr->value = data;
	ptr->next = head;
	head = ptr;
	ptr = NULL;
}
void major::insert_last(double data) {
	afc* ptr;
	ptr = head;
	while (ptr->next != NULL)
	{
		ptr=ptr->next;
	}
	afc* temp = new afc;
	temp->value = data;
	temp->next = NULL;
	ptr->next = temp;
	tail = temp;
	temp = NULL;

}
void major::delete_start() {

	afc* ptr;
	ptr = head;
	head = ptr->next;
	ptr = NULL;
}
void major::delete_last()
{
	
	afc* pre=NULL;
	afc* temp;
	temp = head;
	while (temp->next != NULL)
	{
		pre = temp;
		temp = temp->next;

	}	

	tail = pre;
	pre->next = NULL;
	pre = NULL;
	temp = NULL;

}
void major::delete_add(int pos,double data) {
	pos--;
	afc* pre = NULL;
	afc* temp;
	temp = head;
	for (int i=1; i<=pos;i++)
	{
		if (i == 3) {
		
			afc* ptr = new afc;
			ptr->value = data;
			pre->next = NULL;
			pre->next = ptr;
			ptr->next = temp;

	}
		pre = temp;
		temp = temp->next;

	}

	pre->next = NULL;
	
	pre->next= temp->next;
	temp->next = NULL;
	temp = NULL;
	pre = NULL;


}