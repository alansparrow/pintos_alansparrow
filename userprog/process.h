#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

struct process_file {
  struct file *file;
  int fd;
  struct list_elem elem;
};

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);


/* HW3 */
struct child_process *get_child_process(int pid);
void remove_child_process(struct child_process *cp);

/* HW4 */

int process_add_file(struct file *);
struct file *process_get_file(int fd);
void process_close_file(int fd);

#endif /* userprog/process.h */
