#include <stdio.h>
int main()
{
    float L, B, H, DL, DB, WL, WB, wall_area, door_area, window_area, paint_area, roof_area;
    printf("Enter Room Dimensions :");
    scanf("%f%f%f", &L, &B, &H);
    printf("Enter Door Dimensions :");
    scanf("%f%f", &DL, &DB);
    printf("Enter Window Dimensions :");
    scanf("%f%f", &WL, &WB);
    wall_area = 2 * H * (L + B);
    door_area = DL * DB;
    window_area = 2 * WL * WB;
    paint_area = wall_area - (door_area + window_area);
    roof_area = L * B;
    printf("Area to be painted = %.2f sq.units\n", paint_area);
    printf("Area to be whitewashed = %.2f sq.units\n", roof_area);
    return 0;
}