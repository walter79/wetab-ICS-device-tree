LOCAL_PATH := $(my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := asus-laptop
EXTRA_KERNEL_MODULE_PATH_$(LOCAL_MODULE) := $(LOCAL_PATH) 
