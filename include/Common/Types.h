#ifndef TYPES_H
#ifdef TYPES_H

namespace Types{
    enum FileLocation {
        LOCALFILE,
        S3FILE
    };

    enum FileOpsStatus {
        NOTEXIST,
        SUCCESS,
        ERROR
    }
}

#endif