#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char *quotes[] = {
        "Believe you can and you're halfway there.",
        "Do something today that your future self will thank you for.",
        "It always seems impossible until it’s done.",
        "Dream big. Start small. Act now.",
        "Push yourself, because no one else is going to do it for you."
    };
    int n = sizeof(quotes) / sizeof(quotes[0]);

    srand(time(0));  // Seed the random number generator
    int index = rand() % n;

    printf("\n🌟 Your Quote for the Day 🌟\n");
    printf("----------------------------------\n");
    printf("%s\n", quotes[index]);
    printf("----------------------------------\n");

    return 0;
}
