float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float feet_to_meters(void)
{
    //Dacoda Banes
    float ft = get_float("Number of feet:");
    float m = ft / 3.28084;
    printf("\nThe number of meters is %.2f\n", m);
    return m;
}
