// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

package co.ledger.core;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class DynamicArray {
    public abstract long size();

    public abstract String getString(long index);

    public abstract Integer getInt(long index);

    public abstract Long getLong(long index);

    public abstract Double getDouble(long index);

    public abstract byte[] getData(long index);

    public abstract Boolean getBoolean(long index);

    public abstract DynamicArray pushInt(int value);

    public abstract DynamicArray pushLong(long value);

    public abstract DynamicArray pushString(String value);

    public abstract DynamicArray pushDouble(double value);

    public abstract DynamicArray pushData(byte[] value);

    public abstract DynamicArray pushBoolean(boolean value);

    public abstract DynamicObject getObject(long index);

    public abstract DynamicArray getArray(long index);

    public abstract DynamicArray pushObject(DynamicObject value);

    public abstract DynamicArray pushArray(DynamicArray value);

    public abstract DynamicArray concat(DynamicArray array);

    public abstract DynamicType getType(long index);

    public abstract boolean remove(long index);

    public abstract String dump();

    public abstract byte[] serialize();

    public static native DynamicArray newInstance();

    public static native DynamicArray load(byte[] serialized);

    private static final class CppProxy extends DynamicArray
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public long size()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_size(this.nativeRef);
        }
        private native long native_size(long _nativeRef);

        @Override
        public String getString(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getString(this.nativeRef, index);
        }
        private native String native_getString(long _nativeRef, long index);

        @Override
        public Integer getInt(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getInt(this.nativeRef, index);
        }
        private native Integer native_getInt(long _nativeRef, long index);

        @Override
        public Long getLong(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getLong(this.nativeRef, index);
        }
        private native Long native_getLong(long _nativeRef, long index);

        @Override
        public Double getDouble(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getDouble(this.nativeRef, index);
        }
        private native Double native_getDouble(long _nativeRef, long index);

        @Override
        public byte[] getData(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getData(this.nativeRef, index);
        }
        private native byte[] native_getData(long _nativeRef, long index);

        @Override
        public Boolean getBoolean(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getBoolean(this.nativeRef, index);
        }
        private native Boolean native_getBoolean(long _nativeRef, long index);

        @Override
        public DynamicArray pushInt(int value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_pushInt(this.nativeRef, value);
        }
        private native DynamicArray native_pushInt(long _nativeRef, int value);

        @Override
        public DynamicArray pushLong(long value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_pushLong(this.nativeRef, value);
        }
        private native DynamicArray native_pushLong(long _nativeRef, long value);

        @Override
        public DynamicArray pushString(String value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_pushString(this.nativeRef, value);
        }
        private native DynamicArray native_pushString(long _nativeRef, String value);

        @Override
        public DynamicArray pushDouble(double value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_pushDouble(this.nativeRef, value);
        }
        private native DynamicArray native_pushDouble(long _nativeRef, double value);

        @Override
        public DynamicArray pushData(byte[] value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_pushData(this.nativeRef, value);
        }
        private native DynamicArray native_pushData(long _nativeRef, byte[] value);

        @Override
        public DynamicArray pushBoolean(boolean value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_pushBoolean(this.nativeRef, value);
        }
        private native DynamicArray native_pushBoolean(long _nativeRef, boolean value);

        @Override
        public DynamicObject getObject(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getObject(this.nativeRef, index);
        }
        private native DynamicObject native_getObject(long _nativeRef, long index);

        @Override
        public DynamicArray getArray(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getArray(this.nativeRef, index);
        }
        private native DynamicArray native_getArray(long _nativeRef, long index);

        @Override
        public DynamicArray pushObject(DynamicObject value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_pushObject(this.nativeRef, value);
        }
        private native DynamicArray native_pushObject(long _nativeRef, DynamicObject value);

        @Override
        public DynamicArray pushArray(DynamicArray value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_pushArray(this.nativeRef, value);
        }
        private native DynamicArray native_pushArray(long _nativeRef, DynamicArray value);

        @Override
        public DynamicArray concat(DynamicArray array)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_concat(this.nativeRef, array);
        }
        private native DynamicArray native_concat(long _nativeRef, DynamicArray array);

        @Override
        public DynamicType getType(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getType(this.nativeRef, index);
        }
        private native DynamicType native_getType(long _nativeRef, long index);

        @Override
        public boolean remove(long index)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_remove(this.nativeRef, index);
        }
        private native boolean native_remove(long _nativeRef, long index);

        @Override
        public String dump()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_dump(this.nativeRef);
        }
        private native String native_dump(long _nativeRef);

        @Override
        public byte[] serialize()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_serialize(this.nativeRef);
        }
        private native byte[] native_serialize(long _nativeRef);
    }
}