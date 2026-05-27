int main() {
    const int max_age_1 = 100;
    // max_age_1 = 90; "Cant change the value for max_age since its constant."
    const int max_age_2 = 90;
    int max_age_3 = 110;

    const int* age_1 = &max_age_1;
    age_1 = &max_age_2;
    // *age_1 = 45; "In this case, i cant change the contents of the pointer."

    int const* age_2 = &max_age_2;
    // "This works same as 'const int*' "
    age_2 = &max_age_3;
    // *age_2 = 50; 
    

    int* const age_3 = &max_age_3;
    *age_3 = 50;
    // age_3 = &max_age_3; "In this case, i cant reassign the pointer to point to something else."

    return 0;
}