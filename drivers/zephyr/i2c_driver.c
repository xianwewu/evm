#include "nevm.h"

#define ARG_LENGTH_ERR { evm_set_err(e, ec_type, "invalid argument length");return evm_mk_undefined(); }
#define ARG_TYPE_ERR   { evm_set_err(e, ec_type, "invalid argument type");return evm_mk_undefined(); }

evm_val_t nevm_driver_i2c_gpio_init(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_i2c_config(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_i2c_init(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_i2c_deinit(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_i2c_master_transmit(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_i2c_slave_receive(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_i2c_mem_transmit(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_i2c_mem_receive(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_i2c_seq_transmit(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_i2c_seq_receive(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}