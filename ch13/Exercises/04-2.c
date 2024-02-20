int read_line(char str[], int n)
{
    int ch , i = 0;

    while((ch = getchar()) != '\n')
    // Saltamos los espacios
        if(i == 0 && isspace(ch))
        ;
        // Nos aseguramos de no pasar el tamaño del array
        else if(i < n)
            str[i++] = ch;
    str[i++] = '\0'; // Añadimos el caracter null para que sea un string
    return i;
}

int read_line_b(char str[], int n){
    int ch, i = 0;

    while(!isspace(ch = getchar()))
        if(i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int read_line_c(char str[], int n){
    int ch, i = 0;

    do{
        ch = getchar();
        if(i < n)
            str[i++] = ch;
    }while(ch != '\0');
    str[i] = '\0';
    return i;
}

int read_line_d (char str[], int n){
    int ch, i;

    for(i = 0; i < n; i++){
            ch = getchar();
            if(ch == '\n')
                break;
            str[i] = ch;
    }
    str[i] = '\0';
    return i;
}