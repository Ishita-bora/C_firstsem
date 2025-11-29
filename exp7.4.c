#include <stdio.h>
#include <string.h>


union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    
    strcpy(addr.name, "ishita bora");
    printf("Name: %s\n", addr.name);

    strcpy(addr.hostel_address, "Room 23, panacea Hostel, 32 road");
    printf("Present Address: %s\n", addr.hostel_address);

    strcpy(addr.city, "dehradun");
    printf("City: %s\n", addr.city);

    strcpy(addr.state, "Uttarakhand");
    printf("State: %s\n", addr.state);

    strcpy(addr.zip, "248001");
    printf("ZIP Code: %s\n", addr.zip);

    return 0;
}
