
int main()
{
    auto int number = 5;
    {
        auto int number = 20;
        printf("inner number: %d", number);
    }
    printf("\nouter number: %d", number);
    return 0;
}