class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        vector<int> frequency(10001, 0);
        
        for (int barcode : barcodes) {
            ++frequency[barcode];
        }
        
        auto cmp = [&](int barcode1, int barcode2) {
            return frequency[barcode1] < frequency[barcode2]; 
        };
        
        priority_queue<int,vector<int>, decltype(cmp)> maxHeap(cmp);
        
        for (int barcode = 1; barcode <= 10000; ++barcode) {
            if (frequency[barcode] != 0) {
                maxHeap.push(barcode);
            } 
        }
        
        int index = 0;
        vector<int> result(barcodes.size());
        
        while (!maxHeap.empty()) {
            int barcode = maxHeap.top(); maxHeap.pop();
            int freq = frequency[barcode];
            
            while (freq-- != 0) {
                result[index] = barcode;
                index += 2;
                if (index >= (int)barcodes.size()) {
                    index = 1;
                }
            }
        }
        
        return result;
    }
};
