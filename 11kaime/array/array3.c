//array3.c
int r[10];
int i;
int q[5];
int j = 0;
for(i=0;i<10;i++){
    r[i]=rand()%100;
    if i % 2 == 0{
        q[j] = r[i];
        j++;
    } 
}

//内容を確認する場合は
for(j=0;i<5;i++){
    printf("(%d,%d)", r[2*j], q[j]);
}