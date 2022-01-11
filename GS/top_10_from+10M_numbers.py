def heapSelect(List list, k) {
        def heap = new PriorityQueue(k)
        list.each{ item ->
            if (heap.size() < k || item > heap.peek()) {
                if (heap.size() == k)
                    heap.remove(heap.peek())
                heap.offer(item)
            }
        }
        return heap as List
    }