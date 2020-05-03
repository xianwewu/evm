#include "nevm.h"

#ifdef EVM_DRIVER_GPIO
#include <device.h>
#include <drivers/gpio.h>
#endif


//gpio_config(char pin, char flags)
evm_val_t nevm_driver_gpio_config(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)e;(void)p;
#ifdef EVM_DRIVER_GPIO
    if( argc > 1 ){
		struct device * dev = (struct device *)nevm_object_get_ext_data(p);
        if( !dev ) return NEVM_FALSE;
        if( !gpio_pin_configure(dev, (gpio_pin_t)evm_2_integer(v), (gpio_flags_t)evm_2_integer(v + 1)) )
		    return NEVM_TRUE;
    }
#endif
    return NEVM_TRUE;
}

//gpio_init(String name)
evm_val_t nevm_driver_gpio_init(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)e;(void)p;
#ifdef EVM_DRIVER_GPIO
    if( argc > 0 && evm_is_string(v) ){
		struct device * dev = device_get_binding(evm_2_string(v));
        if( !dev ) return NEVM_FALSE;
        nevm_object_set_ext_data(p, (intptr_t)dev);
        return NEVM_TRUE;
    }
#endif
    return NEVM_FALSE;
}
//gpio_deinit()
evm_val_t nevm_driver_gpio_deinit(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)e;(void)p;(void)argc;(void)v;
    return EVM_VAL_UNDEFINED;
}
//gpio_write_pin(char pin, char value)
evm_val_t nevm_driver_gpio_write_pin(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)e;(void)p;
#ifdef EVM_DRIVER_GPIO
    struct device * dev = (struct device *)nevm_object_get_ext_data(p);
    if( !dev ) return NEVM_FALSE;
    gpio_pin_set(dev, (gpio_pin_t)evm_2_integer(v), evm_2_integer(v + 1) );
#endif
    return NEVM_TRUE;
}
//gpio_read_pin(char pin)
evm_val_t nevm_driver_gpio_read_pin(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)e;(void)p;
#ifdef EVM_DRIVER_GPIO
    struct device * dev = (struct device *)nevm_object_get_ext_data(p);
    if( !dev ) return NEVM_FALSE;
    return evm_mk_number( gpio_pin_get(dev, (gpio_pin_t)evm_2_integer(v) ) );
#endif
return EVM_VAL_UNDEFINED;
}