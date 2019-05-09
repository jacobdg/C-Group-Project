/* Header file for event_manager.c */
/* Contains all #define, structs, and function prototypes */

#ifndef C_GROUP_PROJECT_EVENT_MANAGER_H
#define C_GROUP_PROJECT_EVENT_MANAGER_H

    #define MAX_NAME_LEN 20
    #define MAX_PASS_LEN 24
    #define MIN_PASS_LEN 8

    #define YEAR_LEN 4
    #define MIN_MONTH 1
    #define MAX_MONTH 12
    #define MIN_DAY 1
    #define MAX_DAY 31

    #define MAX_PATRONS 200
    #define MAX_STAFF 50
    #define MAX_EVENTS 10


    struct date
    {
        int year;
        int month;
        int day;
    };
    typedef struct date date_t;

    struct card {
        int card_num;
        date_t exp;
        int cvv;
        char name;
    };

    struct person
    {
        char firstname[MAX_NAME_LEN];
        char lastname[MAX_NAME_LEN];
        char password[MAX_PASS_LEN];
        date_t DOB;
    };
    typedef struct person person_t;

    struct patron
    {
        person_t personal;
    };
    typedef struct patron patron_t;

    struct staff
    {
        int id;
        person_t personal;
    };
    typedef struct staff staff_t;

    struct coord
    {
        staff_t staff;
    };
    typedef struct coord coord_t;

    struct event
    {
        char name[MAX_NAME_LEN];
        patron_t patrons[MAX_PATRONS];
        staff_t staffs[MAX_STAFF];
        coord_t coordinator;
    };
    typedef struct event event_t;


    void print_menu(void);
    void add_event(event_t* events, int* event_count);
    void display_event(event_t events, int event_count);
    void edit_event(event_t* events);
    void add_database(event_t* events, int event_count);
    void load_database(event_t* events, int* event_count);
    /*Perhaps add more prototype functions if necessary,
    also need to put people on different tasks for these functions*/

#endif /*C_GROUP_PROJECT_EVENT_MANAGER_H*/
