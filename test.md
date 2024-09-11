parsing :
add flag to not execute ls >"" if no such file or directory

csaidi@c3r6p5:~$ echo '$USER'"$HOME""$HOME" $USER '$HOME'
$USER/nfs/homes/csaidi/nfs/homes/csaidi csaidi $HOME [x];

----------------------------------------------------------
expand[x]; you have to check the next if double quates
csaidi@c3r6p5:~/Desktop/merged_ms$ cat <<l
jksf
fjkef
wnfkwef
> '$HOME'"$USER"kshnfjsdf
> l
jksf
fjkef
wnfkwef
'/nfs/homes/csaidi'"csaidi"kshnfjsdf
csaidi@c3r6p5:~/Desktop/merged_ms$ 


minishell output
jksfd
jskdfsd
ksdf
'$HOME'"$USER"kshnfjsdf

is not a syntaxe error
ls |>>s

csaidi@c3r6p5:~/Desktop/merged_ms$ .
bash: .: filename argument required
.: usage: . filename [arguments]
csaidi@c3r6p5:~/Desktop/merged_ms$ ..
..: command not found
csaidi@c3r6p5:~/Desktop/merged_ms$ 

csaidi@c3r6p5:~/Desktop/merged_ms$ ""   //kahsek dir strdup(""); bash thandliha
Command '' not found,



minishell $:export a="       "
minishell $:$a
AddressSanitizer:DEADLYSIGNAL

=================================================================
==18662==ERROR: AddressSanitizer: SEGV on unknown address 0x000000000000 (pc 0x55eef9dd0f11 bp 0x7ffdaacb09b0 sp 0x7ffdaacb0910 T0)
==18662==The signal is caused by a READ memory access.
==18662==Hint: address points to the zero page.
    #0 0x55eef9dd0f11 in handle_space_exp flaha/expand_utils.c:95
    #1 0x55eef9dd0898 in exp_copy flaha/expand.c:77
    #2 0x55eef9dd0a87 in expander flaha/expand.c:110
    #3 0x55eef9dcfa33 in parsing flaha/parsing.c:119
    #4 0x55eef9dce60c in ft_minishell /nfs/homes/csaidi/Desktop/merged_ms/main.c:23
    #5 0x55eef9dce761 in main /nfs/homes/csaidi/Desktop/merged_ms/main.c:54
    #6 0x7fb1596aad8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58
    #7 0x7fb1596aae3f in __libc_start_main_impl ../csu/libc-start.c:392
    #8 0x55eef9dc9444 in _start (/nfs/homes/csaidi/Desktop/merged_ms/minishell+0x1444)

AddressSanitizer can not provide additional info.
SUMMARY: AddressSanitizer: SEGV flaha/expand_utils.c:95 in handle_space_exp
==18662==ABORTING



minishell $:echo $a
csaidi/nfs/homes/csaidi
minishell $:echo '$USER'$HOME
$USER$HOME
minishell $:echo "'$USER'$HOME"
'csaidi'/nfs/homes/csaidi
minishell $:


kat expandi mli kikon kolchi was "" wkha ikon wasto single quates wlakin khasek t expandi wakha matkonch  "" double quates

handel quates as special character

minishell $:echo "\'\""
minishell: Syntax Error in quotes
minishell $:


csaidi@c3r6p5:~/Desktop/merged_ms$ echo "'''" \'
''' '
csaidi@c3r6p5:~/Desktop/merged_ms$ 


minishell $:echo "'''" \'
minishell: Syntax Error in quotes
minishell $:

hada khas ikon syntaxe error
csaidi@c3r6p5:~/Desktop/merged_ms$ echo "'''" \''
> ^C
csaidi@c3r6p5:~/Desktop/merged_ms$ 


minishell $:echo "'''" \''
''' \
minishell $:


mli ikon 3andek imbigious redirection makhasekch t t openi chi file 
o ila kan kamlo space rah tay segvolti
minishell $:export a="f             l"
minishell $:ls >$a
a ambigious redirection
minishell $:

handel is a directory
minishell $:execution/


must be like this
csaidi@c3r6p5:~/Desktop/merged_ms$ execution/
bash: execution/: Is a directory
csaidi@c3r6p5:~/Desktop/merged_ms$ 
-----------------------------------------------------------------

builtins :

pwd : [ok];
echo [ok];
exit [ko]; --> exit -42 should print 214; and exit  | exit [ko] shuld not exit from parent 
env[ok];

unset [ok];
export[] : maybe ok ;
cd [ok];
