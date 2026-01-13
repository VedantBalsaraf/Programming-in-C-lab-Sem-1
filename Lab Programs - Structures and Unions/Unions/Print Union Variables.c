#include <stdio.h>

// Enum to track the type of data stored in the union
enum Type {
    INTEGER,
    FLOATING_POINT
};

// Union definition
union Data {
	int integer;
	float floating_point;
};

// Structure definition
struct Value {
    enum Type type;
    union Data data;
};

int main() {
    struct Value variable1, variable2;

    // --- Input for variable1 (integer) ---
    variable1.type = INTEGER;
    scanf("%f", &variable1.data.floating_point);
    // convert to integer (truncate if needed)
    variable1.data.integer = (int)variable1.data.floating_point;

    // --- Clear input buffer ---
    while (getchar() != '\n' && !feof(stdin));

    // --- Input for variable2 (floating-point) ---
    variable2.type = FLOATING_POINT;
    scanf("%f", &variable2.data.floating_point);

    // --- Print variable1 ---
    if (variable1.type == INTEGER)
        printf("%d\n", variable1.data.integer);
    else
        printf("%.1f\n", variable1.data.floating_point);

    // --- Print variable2 ---
    if (variable2.type == FLOATING_POINT)
        printf("%.1f\n", variable2.data.floating_point);
    else
        printf("%d\n", variable2.data.integer);

    return 0;
}

