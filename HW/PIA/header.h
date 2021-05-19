#define MaxUs 20
#define MaxLen 15
#define labtime 10

typedef struct
{
    char name[MaxLen];
    char name2[MaxLen];
    char ln[MaxLen];
    char ln2[MaxLen];
    char topic[MaxLen];
    char day[MaxLen];
    int price[MaxLen];
    int hrs[labtime];
} User;

void registerUser();
void writeToFile();
int linecounter();

User list[MaxUs];