using System;
using UnityEngine;

struct PathRequest {
    public Vector3 pathStart;
    public Vector3 pathEnd;
    public Action<Vector3[], bool> callback;

    public PathRequest(Vector3 _start, Vector3 _end, Action<Vector3[], bool> _callback) {
        pathStart = _start;
        pathEnd = _end;
        callback = _callback;
    }
}