#include <stdio.h>

typedef struct HMS {
    int H;
    int M;
    int S;
    int H_FST;
    int M_FST;
    int S_FST;
    int H_SND;
    int M_SND;
    int S_SND;
}HMS;

int convert_second(int h, int m, int s) {
    int tmp1 = h * 3600;
    int tmp2 = m * 60;
    return tmp1 + tmp2 + s;
}

void convert_HMS(int second, HMS* phms) {
    int h = second / 3600;
    int r1 = second % 3600;
    int m = r1 / 60;
    int r2 = r1 % 60;
    int s = r2;

    phms->H = h;
    phms->M = m;
    phms->S = s;
}

int calc_diff(fst, snd) {
    return (snd - fst);
}

int main() {
    HMS hms;
    HMS* phms = &hms;
    int current, next, diff;

    printf("this program calculate time difference\n");

    printf("please input first time\n");
    printf("hour: ");
    scanf("%d", &hms.H_FST);
    printf("minute: ");
    scanf("%d", &hms.M_FST);
    printf("second: ");
    scanf("%d", &hms.S_FST);

    current = convert_second(hms.H_FST, hms.M_FST, hms.S_FST);
    printf("first time show by second: %d\n", current);

    printf("please input next current time\n");
    printf("hour: ");
    scanf("%d", &hms.H_SND);
    printf("minute: ");
    scanf("%d", &hms.M_SND);
    printf("second: ");
    scanf("%d", &hms.S_SND);

    next = convert_second(hms.H_SND, hms.M_SND, hms.S_SND);
    printf("\nnext time display with second: %d\n", next);

    if (current < next) {
        diff = calc_diff(current, next);
    } else {
        diff = calc_diff(next, current);
    }

    printf("time difference display with second: %d\n", diff);

    convert_HMS(diff, phms);
    printf("calculation result: %dh:%dm:%ds\n", hms.H, hms.M, hms.S);
}
