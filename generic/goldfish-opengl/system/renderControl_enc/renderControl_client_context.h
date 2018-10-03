// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#ifndef __renderControl_client_context_t_h
#define __renderControl_client_context_t_h

#include "renderControl_client_proc.h"

#include "renderControl_types.h"


struct renderControl_client_context_t {

	rcGetRendererVersion_client_proc_t rcGetRendererVersion;
	rcGetEGLVersion_client_proc_t rcGetEGLVersion;
	rcQueryEGLString_client_proc_t rcQueryEGLString;
	rcGetGLString_client_proc_t rcGetGLString;
	rcGetNumConfigs_client_proc_t rcGetNumConfigs;
	rcGetConfigs_client_proc_t rcGetConfigs;
	rcChooseConfig_client_proc_t rcChooseConfig;
	rcGetFBParam_client_proc_t rcGetFBParam;
	rcCreateContext_client_proc_t rcCreateContext;
	rcDestroyContext_client_proc_t rcDestroyContext;
	rcCreateWindowSurface_client_proc_t rcCreateWindowSurface;
	rcDestroyWindowSurface_client_proc_t rcDestroyWindowSurface;
	rcCreateColorBuffer_client_proc_t rcCreateColorBuffer;
	rcOpenColorBuffer_client_proc_t rcOpenColorBuffer;
	rcCloseColorBuffer_client_proc_t rcCloseColorBuffer;
	rcSetWindowColorBuffer_client_proc_t rcSetWindowColorBuffer;
	rcFlushWindowColorBuffer_client_proc_t rcFlushWindowColorBuffer;
	rcMakeCurrent_client_proc_t rcMakeCurrent;
	rcFBPost_client_proc_t rcFBPost;
	rcFBSetSwapInterval_client_proc_t rcFBSetSwapInterval;
	rcBindTexture_client_proc_t rcBindTexture;
	rcBindRenderbuffer_client_proc_t rcBindRenderbuffer;
	rcColorBufferCacheFlush_client_proc_t rcColorBufferCacheFlush;
	rcReadColorBuffer_client_proc_t rcReadColorBuffer;
	rcUpdateColorBuffer_client_proc_t rcUpdateColorBuffer;
	rcOpenColorBuffer2_client_proc_t rcOpenColorBuffer2;
	rcCreateClientImage_client_proc_t rcCreateClientImage;
	rcDestroyClientImage_client_proc_t rcDestroyClientImage;
	rcSelectChecksumHelper_client_proc_t rcSelectChecksumHelper;
	rcCreateSyncKHR_client_proc_t rcCreateSyncKHR;
	rcClientWaitSyncKHR_client_proc_t rcClientWaitSyncKHR;
	rcFlushWindowColorBufferAsync_client_proc_t rcFlushWindowColorBufferAsync;
	rcDestroySyncKHR_client_proc_t rcDestroySyncKHR;
	rcSetPuid_client_proc_t rcSetPuid;
	rcUpdateColorBufferDMA_client_proc_t rcUpdateColorBufferDMA;
	rcCreateColorBufferDMA_client_proc_t rcCreateColorBufferDMA;
	virtual ~renderControl_client_context_t() {}

	typedef renderControl_client_context_t *CONTEXT_ACCESSOR_TYPE(void);
	static void setContextAccessor(CONTEXT_ACCESSOR_TYPE *f);
	int initDispatchByName( void *(*getProc)(const char *name, void *userData), void *userData);
	virtual void setError(unsigned int  error){ (void)error; };
	virtual unsigned int getError(){ return 0; };
};

#endif
