#ifndef _UTMP_H
#include <login/utmp.h>

# ifndef _ISOMAC

/* Now define the internal interfaces.  */
extern void __updwtmp (const char *__wtmp_file, const struct utmp *__utmp)
     attribute_hidden;
extern int __utmpname (const char *__file) attribute_hidden;
extern struct utmp *__getutent (void) attribute_hidden;
extern void __setutent (void) attribute_hidden;
extern void __endutent (void) attribute_hidden;
extern struct utmp *__getutid (const struct utmp *__id) attribute_hidden;
extern struct utmp *__getutline (const struct utmp *__line)
     attribute_hidden;
extern struct utmp *__pututline (const struct utmp *__utmp_ptr)
     attribute_hidden;
extern int __getutent_r (struct utmp *__buffer, struct utmp **__result)
     attribute_hidden;
extern int __getutid_r (const struct utmp *__id, struct utmp *__buffer,
			struct utmp **__result)
     attribute_hidden;
extern int __getutline_r (const struct utmp *__line,
			  struct utmp *__buffer, struct utmp **__result)
     attribute_hidden;

libutil_hidden_proto (login_tty)

# endif /* !_ISOMAC */
#endif
