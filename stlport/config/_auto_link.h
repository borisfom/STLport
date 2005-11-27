#if !defined (__BUILDING_STLPORT) && !defined (_STLP_DONT_USE_AUTO_LINK) && \
    !defined (_STLP_NO_IOSTREAMS) && !defined (_STLP_USE_NO_IOSTREAMS)

#  define _STLP_STRINGIZE(X) _STLP_STRINGIZE_AUX(X)
#  define _STLP_STRINGIZE_AUX(X) #X

#  if defined (_STLP_DEBUG)
#    define _STLP_LIB_OPTIM_MODE "stld"
#  elif defined (_DEBUG)
#    define _STLP_LIB_OPTIM_MODE "d"
#  else
#    define _STLP_LIB_OPTIM_MODE ""
#  endif

#  if defined (_STLP_USE_DYNAMIC_LIB)
#    define _STLP_LIB_TYPE ""
#  else
#    define _STLP_LIB_TYPE "_static"
#  endif

#  define _STLP_VERSION_STR _STLP_STRINGIZE(_STLPORT_MAJOR)"."_STLP_STRINGIZE(_STLPORT_MINOR)

#  define _STLP_STLPORT_LIB "stlport"_STLP_LIB_OPTIM_MODE""_STLP_LIB_TYPE"."_STLP_VERSION_STR".lib"

#  if defined (_STLP_VERBOSE_AUTO_LINK)
#    pragma message ("STLport: Auto linking to "_STLP_STLPORT_LIB)
#  endif
#  pragma comment (lib, _STLP_STLPORT_LIB)

#  undef _STLP_STLPORT_LIB
#  undef _STLP_LIB_OPTIM_MODE
#  undef _STLP_LIB_TYPE
//#  undef _STLP_STRINGIZE_AUX
//#  undef _STLP_STRINGIZE

#endif /* _STLP_DONT_USE_AUTO_LINK */
