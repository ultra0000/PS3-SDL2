/* include/SDL_config.h.  Generated from SDL_config.h.in by configure.  */
/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2013 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#ifndef _SDL_config_h
#define _SDL_config_h

/**
 *  \file SDL_config.h.in
 *
 *  This is a set of defines to configure the SDL features
 */

/* General platform specific identifiers */
#include "SDL_platform.h"

/* Make sure that this isn't included by Visual C++ */
#ifdef _MSC_VER
#error You should run hg revert SDL_config.h 
#endif

/* C language features */
/* #undef const */
/* #undef inline */
/* #undef volatile */

/* C datatypes */
#ifdef __LP64__
#define SIZEOF_VOIDP 8
#else
#define SIZEOF_VOIDP 4
#endif
#define HAVE_GCC_ATOMICS 1
/* #undef HAVE_GCC_SYNC_LOCK_TEST_AND_SET */
/* #undef HAVE_PTHREAD_SPINLOCK */

/* Comment this if you want to build without any C library requirements */
#define HAVE_LIBC 1
#if HAVE_LIBC

/* Useful headers */
#define HAVE_ALLOCA_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_STDIO_H 1
#define STDC_HEADERS 1
#define HAVE_STDLIB_H 1
#define HAVE_STDARG_H 1
#define HAVE_MALLOC_H 1
/* #undef HAVE_MEMORY_H */
#define HAVE_STRING_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_CTYPE_H 1
#define HAVE_MATH_H 1
#define HAVE_ICONV_H 1
#define HAVE_SIGNAL_H 1
#define HAVE_ALTIVEC_H 1
/* #undef HAVE_PTHREAD_NP_H */
/* #undef HAVE_LIBUDEV_H */
/* #undef HAVE_DBUS_DBUS_H */

/* C library functions */
#define HAVE_MALLOC 1
#define HAVE_CALLOC 1
#define HAVE_REALLOC 1
#define HAVE_FREE 1
#define HAVE_ALLOCA 1
#ifndef __WIN32__ /* Don't use C runtime versions of these on Windows */
#define HAVE_GETENV 1
#define HAVE_SETENV 1
#define HAVE_PUTENV 1
#define HAVE_UNSETENV 1
#endif
#define HAVE_QSORT 1
#define HAVE_ABS 1
#define HAVE_BCOPY 1
#define HAVE_MEMSET 1
#define HAVE_MEMCPY 1
#define HAVE_MEMMOVE 1
/* #undef HAVE_MEMCMP */
#define HAVE_STRLEN 1
#define HAVE_STRLCPY 1
#define HAVE_STRLCAT 1
#define HAVE_STRDUP 1
/* #undef HAVE__STRREV */
/* #undef HAVE__STRUPR */
/* #undef HAVE__STRLWR */
/* #undef HAVE_INDEX */
/* #undef HAVE_RINDEX */
#define HAVE_STRCHR 1
#define HAVE_STRRCHR 1
#define HAVE_STRSTR 1
/* #undef HAVE_ITOA */
/* #undef HAVE__LTOA */
/* #undef HAVE__UITOA */
/* #undef HAVE__ULTOA */
#define HAVE_STRTOL 1
#define HAVE_STRTOUL 1
/* #undef HAVE__I64TOA */
/* #undef HAVE__UI64TOA */
#define HAVE_STRTOLL 1
#define HAVE_STRTOULL 1
/* #undef HAVE_STRTOD */
#define HAVE_ATOI 1
#define HAVE_ATOF 1
#define HAVE_STRCMP 1
#define HAVE_STRNCMP 1
/* #undef HAVE__STRICMP */
#define HAVE_STRCASECMP 1
/* #undef HAVE__STRNICMP */
#define HAVE_STRNCASECMP 1
#define HAVE_SSCANF 1
#define HAVE_SNPRINTF 1
#define HAVE_VSNPRINTF 1
#define HAVE_M_PI /**/
#define HAVE_ATAN 1
#define HAVE_ATAN2 1
#define HAVE_CEIL 1
#define HAVE_COPYSIGN 1
#define HAVE_COS 1
#define HAVE_COSF 1
#define HAVE_FABS 1
#define HAVE_FLOOR 1
#define HAVE_LOG 1
/* #undef HAVE_POW */
#define HAVE_SCALBN 1
#define HAVE_SIN 1
#define HAVE_SINF 1
#define HAVE_SQRT 1
#define HAVE_FSEEKO 1
/* #undef HAVE_FSEEKO64 */
/* #undef HAVE_SIGACTION */
/* #undef HAVE_SA_SIGACTION */
#define HAVE_SETJMP 1
/* #undef HAVE_NANOSLEEP */
#ifndef __PSL1GHT__ // Yeah PSL1GHT hasn't sysconf
/* #undef HAVE_SYSCONF */
#endif
/* #undef HAVE_SYSCTLBYNAME */
/* #undef HAVE_CLOCK_GETTIME */
/* #undef HAVE_GETPAGESIZE */
/* #undef HAVE_MPROTECT */
/* #undef HAVE_ICONV */
/* #undef HAVE_PTHREAD_SETNAME_NP */
/* #undef HAVE_PTHREAD_SET_NAME_NP */
/* #undef HAVE_SEM_TIMEDWAIT */

#else
#define HAVE_STDARG_H 1
#define HAVE_STDDEF_H 1
#define HAVE_STDINT_H 1
#endif /* HAVE_LIBC */

/* SDL internal assertion support */
/* #undef SDL_DEFAULT_ASSERT_LEVEL */

/* Allow disabling of core subsystems */
/* #undef SDL_ATOMIC_DISABLED */
/* #undef SDL_AUDIO_DISABLED */
/* #undef SDL_CPUINFO_DISABLED */
/* #undef SDL_EVENTS_DISABLED */
/* #undef SDL_FILE_DISABLED */
/* #undef SDL_JOYSTICK_DISABLED */
#define SDL_HAPTIC_DISABLED 1
#define SDL_LOADSO_DISABLED 1
/* #undef SDL_RENDER_DISABLED */
/* #undef SDL_THREADS_DISABLED */
#define SDL_TIMERS_DISABLED 1
/* #undef SDL_VIDEO_DISABLED */
/* #undef SDL_POWER_DISABLED */
#define SDL_FILESYSTEM_DISABLED 1

/* Enable various audio drivers */
/* #undef SDL_AUDIO_DRIVER_ALSA */
/* #undef SDL_AUDIO_DRIVER_ALSA_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_ARTS */
/* #undef SDL_AUDIO_DRIVER_ARTS_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_PULSEAUDIO */
/* #undef SDL_AUDIO_DRIVER_PULSEAUDIO_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_BEOSAUDIO */
/* #undef SDL_AUDIO_DRIVER_BSD */
/* #undef SDL_AUDIO_DRIVER_COREAUDIO */
/* #undef SDL_AUDIO_DRIVER_DISK */
/* #undef SDL_AUDIO_DRIVER_DUMMY */
/* #undef SDL_AUDIO_DRIVER_XAUDIO2 */
/* #undef SDL_AUDIO_DRIVER_DSOUND */
/* #undef SDL_AUDIO_DRIVER_ESD */
/* #undef SDL_AUDIO_DRIVER_ESD_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_NAS */
/* #undef SDL_AUDIO_DRIVER_NAS_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_SNDIO */
/* #undef SDL_AUDIO_DRIVER_SNDIO_DYNAMIC */
/* #undef SDL_AUDIO_DRIVER_OSS */
/* #undef SDL_AUDIO_DRIVER_OSS_SOUNDCARD_H */
/* #undef SDL_AUDIO_DRIVER_PAUDIO */
#define SDL_AUDIO_DRIVER_PSL1GHT 1
/* #undef SDL_AUDIO_DRIVER_QSA */
/* #undef SDL_AUDIO_DRIVER_SUNAUDIO */
/* #undef SDL_AUDIO_DRIVER_WINMM */
/* #undef SDL_AUDIO_DRIVER_FUSIONSOUND */
/* #undef SDL_AUDIO_DRIVER_FUSIONSOUND_DYNAMIC */

/* Enable various input drivers */
/* #undef SDL_INPUT_LINUXEV */
/* #undef SDL_INPUT_LINUXKD */
/* #undef SDL_INPUT_TSLIB */
/* #undef SDL_JOYSTICK_BEOS */
/* #undef SDL_JOYSTICK_DINPUT */
/* #undef SDL_JOYSTICK_DUMMY */
/* #undef SDL_JOYSTICK_IOKIT */
/* #undef SDL_JOYSTICK_LINUX */
/* #undef SDL_JOYSTICK_WINMM */
/* #undef SDL_JOYSTICK_USBHID */
/* #undef SDL_JOYSTICK_USBHID_MACHINE_JOYSTICK_H */
#define SDL_JOYSTICK_PSL1GHT 1
/* #undef SDL_HAPTIC_DUMMY */
/* #undef SDL_HAPTIC_LINUX */
/* #undef SDL_HAPTIC_IOKIT */
/* #undef SDL_HAPTIC_DINPUT */

/* Enable various shared object loading systems */
/* #undef SDL_LOADSO_BEOS */
/* #undef SDL_LOADSO_DLOPEN */
/* #undef SDL_LOADSO_DUMMY */
/* #undef SDL_LOADSO_LDG */
/* #undef SDL_LOADSO_WINDOWS */

/* Enable various threading systems */
/* #undef SDL_THREAD_BEOS */
#define SDL_THREAD_PSL1GHT 1
/* #undef SDL_THREAD_PTHREAD */
/* #undef SDL_THREAD_PTHREAD_RECURSIVE_MUTEX */
/* #undef SDL_THREAD_PTHREAD_RECURSIVE_MUTEX_NP */
/* #undef SDL_THREAD_WINDOWS */

/* Enable various timer systems */
/* #undef SDL_TIMER_BEOS */
/* #undef SDL_TIMER_DUMMY */
/* #undef SDL_TIMER_PSL1GHT */
/* #undef SDL_TIMER_UNIX */
/* #undef SDL_TIMER_WINDOWS */

/* Enable various video drivers */
/* #undef SDL_VIDEO_DRIVER_BWINDOW */
/* #undef SDL_VIDEO_DRIVER_COCOA */
/* #undef SDL_VIDEO_DRIVER_DIRECTFB */
/* #undef SDL_VIDEO_DRIVER_DIRECTFB_DYNAMIC */
/* #undef SDL_VIDEO_DRIVER_DUMMY */
#define SDL_VIDEO_DRIVER_PSL1GHT 1
/* #undef SDL_VIDEO_DRIVER_WINDOWS */
/* #undef SDL_VIDEO_DRIVER_X11 */
/* #undef SDL_VIDEO_DRIVER_RPI */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XEXT */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XCURSOR */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XINERAMA */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XINPUT2 */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XRANDR */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XSS */
/* #undef SDL_VIDEO_DRIVER_X11_DYNAMIC_XVIDMODE */
/* #undef SDL_VIDEO_DRIVER_X11_XCURSOR */
/* #undef SDL_VIDEO_DRIVER_X11_XINERAMA */
/* #undef SDL_VIDEO_DRIVER_X11_XINPUT2 */
/* #undef SDL_VIDEO_DRIVER_X11_XINPUT2_SUPPORTS_MULTITOUCH */
/* #undef SDL_VIDEO_DRIVER_X11_XRANDR */
/* #undef SDL_VIDEO_DRIVER_X11_XSCRNSAVER */
/* #undef SDL_VIDEO_DRIVER_X11_XSHAPE */
/* #undef SDL_VIDEO_DRIVER_X11_XVIDMODE */
/* #undef SDL_VIDEO_DRIVER_X11_SUPPORTS_GENERIC_EVENTS */
/* #undef SDL_VIDEO_DRIVER_X11_CONST_PARAM_XDATA32 */
/* #undef SDL_VIDEO_DRIVER_X11_CONST_PARAM_XEXTADDDISPLAY */
/* #undef SDL_VIDEO_DRIVER_X11_HAS_XKBKEYCODETOKEYSYM */

/* #undef SDL_VIDEO_RENDER_D3D */
/* #undef SDL_VIDEO_RENDER_OGL */
/* #undef SDL_VIDEO_RENDER_OGL_ES */
/* #undef SDL_VIDEO_RENDER_OGL_ES2 */
/* #undef SDL_VIDEO_RENDER_DIRECTFB */
#define SDL_VIDEO_RENDER_PSL1GHT 1

/* Enable OpenGL support */
/* #undef SDL_VIDEO_OPENGL */
/* #undef SDL_VIDEO_OPENGL_ES */
/* #undef SDL_VIDEO_OPENGL_ES2 */
/* #undef SDL_VIDEO_OPENGL_BGL */
/* #undef SDL_VIDEO_OPENGL_CGL */
/* #undef SDL_VIDEO_OPENGL_EGL */
/* #undef SDL_VIDEO_OPENGL_GLX */
/* #undef SDL_VIDEO_OPENGL_WGL */
/* #undef SDL_VIDEO_OPENGL_OSMESA */
/* #undef SDL_VIDEO_OPENGL_OSMESA_DYNAMIC */

/* Enable system power support */
/* #undef SDL_POWER_LINUX */
/* #undef SDL_POWER_WINDOWS */
/* #undef SDL_POWER_MACOSX */
/* #undef SDL_POWER_BEOS */
/* #undef SDL_POWER_HARDWIRED */

/* Enable system filesystem support */
/* #undef SDL_FILESYSTEM_BEOS */
/* #undef SDL_FILESYSTEM_COCOA */
/* #undef SDL_FILESYSTEM_DUMMY */
/* #undef SDL_FILESYSTEM_UNIX */
/* #undef SDL_FILESYSTEM_WINDOWS */

/* Enable assembly routines */
#define SDL_ASSEMBLY_ROUTINES 1
#define SDL_ALTIVEC_BLITTERS 1

#endif /* _SDL_config_h */
