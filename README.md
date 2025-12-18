*This project has been created as part of the 42 curriculum by dioppolo.*
# Commoncore
Libft

Description
Libft è il primo progetto del curriculum 42, il cui obiettivo è codificare una libreria C (libft.a) che contenga una serie di funzioni di uso generale. Questo progetto è fondamentale per comprendere il funzionamento delle funzioni della libreria standard C (libc), implementandole autonomamente, e per creare una risorsa essenziale che sarà utilizzata in tutti i progetti successivi del curriculum.

La libreria è composta da tre parti principali:

Reimplementazione delle funzioni Libc: Un set di funzioni esistenti nella libreria standard C (es. strlen, memcpy, isalpha), con il prefisso ft_ (es. ft_strlen).

Funzioni Aggiuntive: Un set di funzioni di utilità che non sono presenti nella libc o hanno una forma diversa (es. ft_substr, ft_split, ft_itoa).

Funzioni per Liste Collegate (Bonus): Funzioni per manipolare una struttura dati per liste collegate (t_list).

Struttura del Progetto
Il progetto deve essere compilato per creare il file d'archivio della libreria statica: libft.a.

Programma Prodotto: libft.a

File da Inviare: Makefile, libft.h, ft_*.c

Regole del Makefile: $(NAME), all, clean, fclean, re, e bonus (per le funzioni sulle liste)

Istruzioni
Compilazione
Per compilare la libreria libft.a, assicurati di essere nella directory radice del progetto ed esegui:

Bash

make
Questo comando compilerà tutti i file sorgente (ft_*.c) con i flag -Wall, -Wextra, e -Werror, e creerà l'archivio statico libft.a.

Per compilare anche le funzioni per le liste collegate (Parte 3/Bonus), usa la regola bonus:

Bash

make bonus
Pulizia
Rimuovere i file oggetto (.o):

Bash

make clean
Rimuovere i file oggetto (.o) e la libreria (libft.a):

Bash

make fclean
Ricompilazione completa (equivale a fclean seguito da all):

Bash

make re
Utilizzo
Per utilizzare la libreria nel tuo progetto C:

Includi l'header: Includi il file libft.h nei tuoi file sorgente:

C

#include "libft.h"
Compila e Collega: Compila il tuo programma e collega la libreria libft.a usando il flag -L. (per specificare la directory corrente) e -lft (per specificare la libreria libft.a):

Bash

cc <i_tuoi_file_sorgente>.c -L. -lft -o <nome_del_programma>
Dettagli della Libreria
La libreria libft.a contiene le seguenti funzioni, divise per sezione:

Parte 1 - Funzioni Libc (ft_ reimplementate)
Classificazione Caratteri: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

Manipolazione Memoria: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp

Manipolazione Stringhe: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup

Conversione: ft_toupper, ft_tolower, ft_atoi

Allocazione: ft_calloc

Parte 2 - Funzioni Aggiuntive
Stringhe con Allocazione:

ft_substr: Ottiene una sottostringa da una stringa.

ft_strjoin: Concatena due stringhe in una nuova stringa.

ft_strtrim: Rimuove un set di caratteri specifici dall'inizio e dalla fine di una stringa.

ft_split: Divide una stringa in un array di stringhe in base a un delimitatore.

Conversione: ft_itoa: Converte un intero (int) in una stringa.

Iterazione su Stringhe:

ft_strmapi: Applica una funzione a ogni carattere di una stringa per creare una nuova stringa.

ft_striteri: Applica una funzione a ogni carattere di una stringa, permettendone la modifica in-place.

Output su File Descriptor:

ft_putchar_fd: Scrive un carattere su un file descriptor.

ft_putstr_fd: Scrive una stringa su un file descriptor.

ft_putendl_fd: Scrive una stringa seguita da un newline su un file descriptor.

ft_putnbr_fd: Scrive un intero su un file descriptor.

Parte 3 - Liste Collegate (Bonus)
Struttura: t_list

Creazione/Aggiunta:

ft_lstnew: Crea un nuovo nodo.

ft_lstadd_front: Aggiunge un nodo all'inizio della lista.

ft_lstadd_back: Aggiunge un nodo alla fine della lista.

Informazioni/Iterazione:

ft_lstsize: Conta il numero di nodi.

ft_lstlast: Restituisce l'ultimo nodo.

ft_lstiter: Applica una funzione al contenuto di ogni nodo.

ft_lstmap: Applica una funzione al contenuto di ogni nodo e crea una nuova lista.

Eliminazione:

ft_lstdelone: Libera la memoria di un nodo e del suo contenuto (senza liberare il nodo successivo).

ft_lstclear: Elimina e libera tutti i nodi della lista.

Risorse
Man Pages C (Standard C Library): Fonte primaria per il comportamento delle funzioni libc (es. man 3 strlen).

BSD String Functions: Per le funzioni come strlcpy e strlcat, può essere utile consultare la documentazione BSD, dato che non sono standard nella GNU C Library (glibc).
