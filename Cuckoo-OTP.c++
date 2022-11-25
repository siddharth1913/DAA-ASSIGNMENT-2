#include <bits/stdc++.h>
// upper bound on number of elements in our array
#define MAXN 11

// choices for position to insert our element in
#define part 2

// MAXN is used for reducing space complexity.
int hashtable[part][MAXN];

// Array to store possible positions for a key
int pos[part];

// Initialise hash table with dummy values
void initTable()
{
    for (int j = 0; j < MAXN; j++)
        for (int i = 0; i < part; i++)
            hashtable[i][j] = INT_MIN;
}

// returns the position in the hash table where key can be placed.
int hash(int function, int key)
{
    switch (function)
    {
    case 1:
        return key % MAXN;
    case 2:
        return (key / MAXN) % MAXN;
    }
}

// It places the key in the appropriate position.If 1st array is full then shifts the current element into position defined by hash function in 2nd array and then inserts the element in the 1st array
void place(int key, int tableID, int cnt, int n)
{
    if (cnt == n)
    {
        return;
    }

    for (int i = 0; i < part; i++)
    {
        pos[i] = hash(i + 1, key);
        if (hashtable[i][pos[i]] == key)
            return;
    }

    if (hashtable[tableID][pos[tableID]] != INT_MIN)
    {
        int dis = hashtable[tableID][pos[tableID]];
        hashtable[tableID][pos[tableID]] = key;
        place(dis, (tableID + 1) % part, cnt + 1, n);
    }
    else
        hashtable[tableID][pos[tableID]] = key;
}

// printable function is used for printing OTP
void printTable()
{
    printf("\nThe OPT generated is : ");
    for (int i = 0; i < part; i++)
        for (int j = 0; j < MAXN; j++)
            (hashtable[i][j] == INT_MIN) ? printf("") : printf("%d", j);
    printf("\n\n");
}

//Main function that implements all the above functions
void cuckoo(int keys[], int n)
{
    //initialise hashtable
    initTable();

    //place keys in hashtable
    for (int i = 0, cnt = 0; i < n; i++, cnt = 0)
        place(keys[i], 0, cnt, n);

    printTable();
}

// function used to generate requestId so that each n every person get different OTP.
std::string random_string(size_t length)
{
    auto randchar = []() -> char
    {
        const char chararr[] = "9876543210";
        const size_t max_index = (sizeof(chararr) - 1);
        return chararr[rand() % max_index];
    };
    std::string str(length, 0);
    std::generate_n(str.begin(), length, randchar);
    return str;
}

int main()
{
    std::string s = random_string(30);
    int keys_1[11];

    for (int i = 0, j = 0; i < s.size(), j < 10; i += 2, j++){
        std::stringstream data(s.substr(i, 2));
        int x = 0;
        data >> x;
        keys_1[j] = x;
    }
    // n is used for storing size of keys_1
    int n = 11;
    cuckoo(keys_1, n);
    return 0;
}