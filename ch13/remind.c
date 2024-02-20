#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int real_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND][MSG_LEN + 3];
    // Se van a añadir el dia, al cual ocupa 3 espacios
    char day_str[3], msg_str[MSG_LEN + 1];
    // array para almacenar el dia y otro array para almacenar el mensaje
    int day, i, j, num_remind = 0;

    for(;;){
        if(num_remind == MAX_REMIND){
            // Comprobamos si el mensaje coje en el espacio restante
            // ya que solo cojen 50 mensajes
            printf("-- No space left--\n");
            break; // Paramos la ejecucion del bucle
        }

    // Si hay espacio, cojemos un nuevo mensaje
    printf("Enter day and reminder: ");
    scanf("%2d", &day); // Nos asegguramos de que no introduzca mas de 2 digitos
    if(day == 0)
    // Si el day es 0, se termina la ejecución del programa
        break;
    sprintf(day_str, "%2d", day); // Convierte day_str a uns string
    read_line(msg_str, MSG_LEN);

    /* Busca donde debe introducirse el nuevo mensaje, para eso, 
    utiliza la funcion que compara las strings, y avanza mientras el dia introducido
    sea menor que el ultimo dia que hay en el array*/
    for(i = 0; i < num_remind ; i++)
        if(strcomp(day_str, reminders[i]) < 0)
            break;
    
    /* Hace sitio para colocar el nuevo mensaje*/
    for(j = num_remind; j > i; j--)
        strcpy(reminders[j], reminders[j - 1]);
    
    
    strcpy(reminders[i], day_str);
    strcpy(reminders[i], msg_str);

    num_remind++;
    }

    printf("\nDay Reminder\n");
    for(i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);
    
    return 0;
}

// Función que lee el mensaje y lo guarda en el array
int read_line(char str[], int n)
{
    int ch, i  = 0;

     while ( ch = getchar() != '\n')
        if (i < n)
            str[i++] = ch;
        str[i] = '\0';
        /* Para poder ser un string, añadimos el caracter null*/
        return i;

}