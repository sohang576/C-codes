#include <stdio.h>

struct Address {
    char street[50];
    char city[20];
    char state[20];
    int pin;
};

struct Employee {
    int id;
    char name[50];
    struct Address address; // nested structure
};

int main() {
    struct Employee emp;

    emp.id = 101;
    strcpy(emp.name, "John Doe");

    strcpy(emp.address.street, "123 Main St");
    strcpy(emp.address.city, "Anytown");
    strcpy(emp.address.state, "CA");
    emp.address.pin = 12345;

    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Address:\n");
    printf("Street: %s\n", emp.address.street);
    printf("City: %s\n", emp.address.city);
    printf("State: %s\n", emp.address.state);
    printf("Pin: %d\n", emp.address.pin);

    return 0;
}
